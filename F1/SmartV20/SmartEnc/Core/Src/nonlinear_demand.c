/*
 * nonlinear_demand.c
 *
 *  Created on: Jan 22, 2025
 *      Author: Alexey Polurotov
 */

#include "stopif.h"
#include "nonlinear_demand.h"

float min_max_normalize(float min, float max, float value)
{
	/* TODO: check arguments
	 * if (value < min || value >  max) {}
	 */
	return (value - min) / (max - min);
}

nonlinear_demand_s nonlinear_demand_imp(nonlinear_demand_s in)
{
	Stopif(!in.input_demand || in.input_demand < 0 || in.input_demand > 4095,
			return (nonlinear_demand_s){.error="Недопустимые входные данные"},
					"Недопустимые входные данные. Возвращаются нули.");

	int PositionRequest[5] = { 0, 64, 128, 192, 255 };  // 0(0%) ... 255(100%)
	int ActuatorPosition[5] = { 0, 64, 128, 192, 255 }; // 0(0%) ... 255(100%)

	int position = min_max_normalize(0, 4095, in.input_demand) * 255;
	int correct_position = position;
	for (int i = 0; i < 5 - 1; ++i)
	{
		if (position < PositionRequest[i] && position > PositionRequest[i + 1])
		{
			correct_position = ActuatorPosition[i] +
					(ActuatorPosition[i + 1] - ActuatorPosition[i]) *
					min_max_normalize(PositionRequest[i], PositionRequest[i + 1], position);
		}
	}
	nonlinear_demand_s out = in;
	out.correct_demand = min_max_normalize(0, 255, correct_position) * 699;
	return out;
}
