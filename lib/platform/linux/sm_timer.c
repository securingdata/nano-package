/** @file sm_timer.c
 *  @brief Timer APIs.
 *
 * Copyright 2021,2022 NXP
 * SPDX-License-Identifier: Apache-2.0
 */

/**
*
* @par Description
* This file implements implements platform independent sleep functionality
* @par History
*
*****************************************************************************/

/* ********************** Include files ********************** */
#include "sm_timer.h"

/* ********************** Functions ********************** */

/* initializes the system tick counter
 * return 0 on succes, 1 on failure */
uint32_t sm_initSleep()
{
    return 0;
}

/**
 * Implement a blocking (for the calling thread) wait for a number of milliseconds.
 */
void sm_sleep(uint32_t msec)
{
    useconds_t microsec = msec * 1000;
    usleep(microsec);
}

/**
 * Implement a blocking (for the calling thread) wait for a number of microseconds
 */
void sm_usleep(uint32_t microsec)
{
    usleep(microsec);
}
