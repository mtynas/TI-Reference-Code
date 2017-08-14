/*
 * crc.c
 *
 *  Created on: 29 Jul 2016
 *      Author: mtynas
 */

#include "crc_utils.h"

//*****************************************************************************
// Perform CRC calculation (IBM 16 CRC)
//*****************************************************************************

uint16_t calc_CRC(void *buf, uint16_t len)
{
	uint8_t *buf_ptr = (uint8_t *)buf;
	uint16_t crc = 0;
	uint16_t j = len;
	uint8_t i = 0;

	while (j > 0)
	{
		uint8_t b = *buf_ptr++;

		// For each bit
		for (i = 0; i < 8; i++)
		{
			crc = ((b ^ (uint8_t)crc) & 0x01) ? ((crc >> 0x01) ^ 0xA001) : (crc >> 0x01);

			// Shift byte 1 bit to the right
			b >>= 1;
		}

		j--;
	}

	return crc;
}

