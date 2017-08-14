/*
 * crc.h
 *
 *  Created on: 29 Jul 2016
 *      Author: mtynas
 */

#ifndef CRC_UTILS_H_
#define CRC_UTILS_H_

#include "stdint.h"

extern uint16_t calc_CRC(void *buf, uint16_t len);

#endif /* CRC_UTILS_H_ */
