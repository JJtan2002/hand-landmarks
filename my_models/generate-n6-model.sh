#!/bin/bash

stedgeai generate --no-inputs-allocation --name yolo_detector --model yolov8_face_call_smk_full_integer_quant.tflite --target stm32n6 --st-neural-art yolo_detector@user_neuralart.json
cp st_ai_output/yolo_detector_ecblobs.h .
cp st_ai_output/yolo_detector.c .
cp st_ai_output/yolo_detector_atonbuf.xSPI2.raw st_ai_output/yolo_detector_data.xSPI2.bin
arm-none-eabi-objcopy -I binary st_ai_output/yolo_detector_data.xSPI2.bin --change-addresses 0x70580000 -O ihex yolo_detector_data.hex

stedgeai generate --name face_landmark --model face_landmark_ptq.tflite --target stm32n6 --st-neural-art face_landmark@user_neuralart.json
cp st_ai_output/face_landmark_ecblobs.h .
cp st_ai_output/face_landmark.c .
cp st_ai_output/face_landmark_atonbuf.xSPI2.raw st_ai_output/face_landmark_data.xSPI2.bin
arm-none-eabi-objcopy -I binary st_ai_output/face_landmark_data.xSPI2.bin --change-addresses 0x70380000 -O ihex face_landmark_data.hex
