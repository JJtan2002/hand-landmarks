/**
  ******************************************************************************
  * @file    ld.c
  * @author  MDG Application Team
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include "ld.h"

#include <stdio.h>

int ld_post_process(float *probs, float *raw_landmarks, ld_point_t landmarks[LD_LANDMARK_NB])
{
  int i;

  if (*probs < LD_PROB_THRESHOLD)
    return 0;

  for (i = 0; i < LD_LANDMARK_NB; i++) {
    landmarks[i].x = raw_landmarks[i * 3 + 0] / LD_WIDTH;
    landmarks[i].y = raw_landmarks[i * 3 + 1] / LD_WIDTH;
  }

  return 1;
}
