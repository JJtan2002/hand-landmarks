/*---------------------------------------------------------------------------------------------
#  * Copyright (c) 2023 STMicroelectronics.
#  * All rights reserved.
#  *
#  * This software is licensed under terms that can be found in the LICENSE file in
#  * the root directory of this software component.
#  * If no LICENSE file comes with this software, it is provided AS-IS.
#  *--------------------------------------------------------------------------------------------*/

/* ---------------    Generated code    ----------------- */
#ifndef __POSTPROCESS_CONF_H__
#define __POSTPROCESS_CONF_H__


#ifdef __cplusplus
  extern "C" {
#endif

#include "arm_math.h"

/* I/O configuration */
#define AI_PD_MODEL_PP_WIDTH                      (192)
#define AI_PD_MODEL_PP_HEIGHT                     (192)
#define AI_PD_MODEL_PP_TOTAL_DETECTIONS           (2016)
#define AI_PD_MODEL_PP_NB_KEYPOINTS               (7)

/* --------  Tuning below can be modified by the application --------- */
#define AI_PD_MODEL_PP_CONF_THRESHOLD              (0.5f)
#define AI_PD_MODEL_PP_IOU_THRESHOLD               (0.4f)
#define AI_PD_MODEL_PP_MAX_BOXES_LIMIT             (20)

#define POSTPROCESS_TYPE    POSTPROCESS_OD_YOLO_V8_UI
#define NB_CLASSES   (3)
#define CLASSES_TABLE const char* classes_table[NB_CLASSES] = {\
   "cigarette" ,   "phone" ,   "face"}\

/* Postprocessing YOLO_V8 configuration */
#define AI_OD_YOLOV8_PP_NB_CLASSES        (3)
#define AI_OD_YOLOV8_PP_TOTAL_BOXES       (2100)
#define AI_OD_YOLOV8_PP_MAX_BOXES_LIMIT   (10)
#define AI_OD_YOLOV8_PP_CONF_THRESHOLD    (0.3f)
#define AI_OD_YOLOV8_PP_IOU_THRESHOLD     (0.1f)

#endif      /* __POSTPROCESS_CONF_H__  */

