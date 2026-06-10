/*
 * ErrorsCommand.h
 *
 * Перечисление кодов ошибок при выполнении команды
 *
 *
 *  Created on: 1 июл. 2023 г.
 *      Author: dedov
 */

#ifndef SRC_MY_SRC_ERRORSCOMMAND_H_
#define SRC_MY_SRC_ERRORSCOMMAND_H_

// Все коды перечисления должны иметь фиксированное значение
// (Для исключения нестыковок с внешними программами)
enum CommandError
{
	Success = 0,	// Успешное завершение
	errCommandNoSupported = 1, // Команда не поддерживается
	errIllegalNumberDevice = 2,	// Неправильный номер устройства
								// (например обращение к 4-му энкодеру при наличии всегод трех)
	errUnknownCommandSubCode = 3, 	// Неизвестный код команды
	errForbiddenToChange = 4,		// запрещено изменять
	errNoSupportedIfManual,			// не поддеживается в ручном режиме
	errNoSupportedIfAuto,			// не поддеживается в автоматическом режиме
	errBusy,			// Занято выполенинем другой команды
	errIllegalParameter,		// неправильный параметр
	errNoreferences,			// оси не реферированы
	errProbeContacting,		// Нельзя потомучто датчик в касании
	errNoPower, 		// не поключенно питание
	errNoSupportedIfReal, 		// не поддеживается в режиме "Работа" (только в режиме "отладка")
	errIllegalParameters, 		// не правильные параметры
};

#endif /* SRC_MY_SRC_ERRORSCOMMAND_H_ */
