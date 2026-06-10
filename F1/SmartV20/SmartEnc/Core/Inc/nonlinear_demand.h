/*
 * nonlinear_demand.h
 *
 *  Created on: Jan 22, 2025
 *      Author: Alexey Polurotov
 */

#ifndef INC_NONLINEAR_DEMAND_H_
#define INC_NONLINEAR_DEMAND_H_

typedef struct {
	int input_demand;
	float normalize;
	int correct_demand;
	char *error;
} nonlinear_demand_s;

/** Вычислить скорректированное значение задания положения звслонки

\li \c input_demand Входная величина задания положения заслонки. Подается с АЦП контроллера. 0 - 4095, 12bit
                    Значения по умолчанию нет--если не задан, печатается сообщение об ошибке и возвращаются нули.

Все параметры должны быть неотрицательны.

\return структура \с nonlinear_demand_s, в которой заполнены все вышеперечисленные поля, а также:

\li \c normalize Нормализованная (0 - 1) величина задания положения заслонки
\li \c correct_demand Абсолютная величина задания положения заслонки
\li \с error Если <tt>error != NULL</tt>, значит, произошла какая-то ошибка и результаты недостоверны.
 */

#define nonlinear_demand(...) nonlinear_demand_imp((nonlinear_demand_s){__VA_ARGS__})

nonlinear_demand_s nonlinear_demand_imp(nonlinear_demand_s in);

#endif /* INC_NONLINEAR_DEMAND_H_ */
