/*
 * File: mavlink_msg_gen_sfuntion.c
 *
 *
  *
  *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
  *
  *   This file is an S-function produced by the S-Function
  *   Builder which only recognizes certain fields.  Changes made
  *   outside these fields will be lost the next time the block is
  *   used to load, edit, and resave this file. This file will be overwritten
  *   by the S-function Builder block. If you want to edit this file by hand, 
  *   you must change it only in the area defined as:  
  *
  *        %%%-SFUNWIZ_defines_Changes_BEGIN
  *        #define NAME 'replacement text' 
  *        %%% SFUNWIZ_defines_Changes_END
  *
  *   DO NOT change NAME--Change the 'replacement text' only.
  *
  *   For better compatibility with the Simulink Coder, the
  *   "wrapper" S-function technique is used.  This is discussed
  *   in the Simulink Coder's Manual in the Chapter titled,
  *   "Wrapper S-functions".
  *
  *  -------------------------------------------------------------------------
  * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
  *  ------------------------------------------------------------------------- 
 * Created: Tue Apr  7 19:49:05 2015
 * 
 *
 */

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME mavlink_msg_gen_sfuntion
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS          17
/* Input Port  0 */
#define IN_PORT_0_NAME      time_usecs
#define INPUT_0_WIDTH       1
#define INPUT_DIMS_0_COL    1
#define INPUT_0_DTYPE       real_T
#define INPUT_0_COMPLEX     COMPLEX_NO
#define IN_0_FRAME_BASED    FRAME_NO
#define IN_0_BUS_BASED      0
#define IN_0_BUS_NAME       
#define IN_0_DIMS           1-D
#define INPUT_0_FEEDTHROUGH 1
#define IN_0_ISSIGNED        0
#define IN_0_WORDLENGTH      8
#define IN_0_FIXPOINTSCALING 1
#define IN_0_FRACTIONLENGTH  9
#define IN_0_BIAS            0
#define IN_0_SLOPE           0.125
/* Input Port  1 */
#define IN_PORT_1_NAME      accel
#define INPUT_1_WIDTH       3
#define INPUT_DIMS_1_COL    1
#define INPUT_1_DTYPE       real_T
#define INPUT_1_COMPLEX     COMPLEX_NO
#define IN_1_FRAME_BASED    FRAME_NO
#define IN_1_BUS_BASED      0
#define IN_1_BUS_NAME       
#define IN_1_DIMS           1-D
#define INPUT_1_FEEDTHROUGH 1
#define IN_1_ISSIGNED        0
#define IN_1_WORDLENGTH      8
#define IN_1_FIXPOINTSCALING 1
#define IN_1_FRACTIONLENGTH  9
#define IN_1_BIAS            0
#define IN_1_SLOPE           0.125
/* Input Port  2 */
#define IN_PORT_2_NAME      gyro
#define INPUT_2_WIDTH       3
#define INPUT_DIMS_2_COL    1
#define INPUT_2_DTYPE       real_T
#define INPUT_2_COMPLEX     COMPLEX_NO
#define IN_2_FRAME_BASED    FRAME_NO
#define IN_2_BUS_BASED      0
#define IN_2_BUS_NAME       
#define IN_2_DIMS           1-D
#define INPUT_2_FEEDTHROUGH 1
#define IN_2_ISSIGNED        0
#define IN_2_WORDLENGTH      8
#define IN_2_FIXPOINTSCALING 1
#define IN_2_FRACTIONLENGTH  9
#define IN_2_BIAS            0
#define IN_2_SLOPE           0.125
/* Input Port  3 */
#define IN_PORT_3_NAME      mag
#define INPUT_3_WIDTH       3
#define INPUT_DIMS_3_COL    1
#define INPUT_3_DTYPE       real_T
#define INPUT_3_COMPLEX     COMPLEX_NO
#define IN_3_FRAME_BASED    FRAME_NO
#define IN_3_BUS_BASED      0
#define IN_3_BUS_NAME       
#define IN_3_DIMS           1-D
#define INPUT_3_FEEDTHROUGH 1
#define IN_3_ISSIGNED        0
#define IN_3_WORDLENGTH      8
#define IN_3_FIXPOINTSCALING 1
#define IN_3_FRACTIONLENGTH  9
#define IN_3_BIAS            0
#define IN_3_SLOPE           0.125
/* Input Port  4 */
#define IN_PORT_4_NAME      euler
#define INPUT_4_WIDTH       3
#define INPUT_DIMS_4_COL    1
#define INPUT_4_DTYPE       real_T
#define INPUT_4_COMPLEX     COMPLEX_NO
#define IN_4_FRAME_BASED    FRAME_NO
#define IN_4_BUS_BASED      0
#define IN_4_BUS_NAME       
#define IN_4_DIMS           1-D
#define INPUT_4_FEEDTHROUGH 1
#define IN_4_ISSIGNED        0
#define IN_4_WORDLENGTH      8
#define IN_4_FIXPOINTSCALING 1
#define IN_4_FRACTIONLENGTH  9
#define IN_4_BIAS            0
#define IN_4_SLOPE           0.125
/* Input Port  5 */
#define IN_PORT_5_NAME      quat
#define INPUT_5_WIDTH       4
#define INPUT_DIMS_5_COL    1
#define INPUT_5_DTYPE       real_T
#define INPUT_5_COMPLEX     COMPLEX_NO
#define IN_5_FRAME_BASED    FRAME_NO
#define IN_5_BUS_BASED      0
#define IN_5_BUS_NAME       
#define IN_5_DIMS           1-D
#define INPUT_5_FEEDTHROUGH 1
#define IN_5_ISSIGNED        0
#define IN_5_WORDLENGTH      8
#define IN_5_FIXPOINTSCALING 1
#define IN_5_FRACTIONLENGTH  9
#define IN_5_BIAS            0
#define IN_5_SLOPE           0.125
/* Input Port  6 */
#define IN_PORT_6_NAME      abs_pressure
#define INPUT_6_WIDTH       1
#define INPUT_DIMS_6_COL    1
#define INPUT_6_DTYPE       real_T
#define INPUT_6_COMPLEX     COMPLEX_NO
#define IN_6_FRAME_BASED    FRAME_NO
#define IN_6_BUS_BASED      0
#define IN_6_BUS_NAME       
#define IN_6_DIMS           1-D
#define INPUT_6_FEEDTHROUGH 1
#define IN_6_ISSIGNED        0
#define IN_6_WORDLENGTH      8
#define IN_6_FIXPOINTSCALING 1
#define IN_6_FRACTIONLENGTH  9
#define IN_6_BIAS            0
#define IN_6_SLOPE           0.125
/* Input Port  7 */
#define IN_PORT_7_NAME      diff_pressure
#define INPUT_7_WIDTH       1
#define INPUT_DIMS_7_COL    1
#define INPUT_7_DTYPE       real_T
#define INPUT_7_COMPLEX     COMPLEX_NO
#define IN_7_FRAME_BASED    FRAME_NO
#define IN_7_BUS_BASED      0
#define IN_7_BUS_NAME       
#define IN_7_DIMS           1-D
#define INPUT_7_FEEDTHROUGH 1
#define IN_7_ISSIGNED        0
#define IN_7_WORDLENGTH      8
#define IN_7_FIXPOINTSCALING 1
#define IN_7_FRACTIONLENGTH  9
#define IN_7_BIAS            0
#define IN_7_SLOPE           0.125
/* Input Port  8 */
#define IN_PORT_8_NAME      temperature
#define INPUT_8_WIDTH       1
#define INPUT_DIMS_8_COL    1
#define INPUT_8_DTYPE       real_T
#define INPUT_8_COMPLEX     COMPLEX_NO
#define IN_8_FRAME_BASED    FRAME_NO
#define IN_8_BUS_BASED      0
#define IN_8_BUS_NAME       
#define IN_8_DIMS           1-D
#define INPUT_8_FEEDTHROUGH 1
#define IN_8_ISSIGNED        0
#define IN_8_WORDLENGTH      8
#define IN_8_FIXPOINTSCALING 1
#define IN_8_FRACTIONLENGTH  9
#define IN_8_BIAS            0
#define IN_8_SLOPE           0.125
/* Input Port  9 */
#define IN_PORT_9_NAME      v_body
#define INPUT_9_WIDTH       3
#define INPUT_DIMS_9_COL    1
#define INPUT_9_DTYPE       real_T
#define INPUT_9_COMPLEX     COMPLEX_NO
#define IN_9_FRAME_BASED    FRAME_NO
#define IN_9_BUS_BASED      0
#define IN_9_BUS_NAME       
#define IN_9_DIMS           1-D
#define INPUT_9_FEEDTHROUGH 1
#define IN_9_ISSIGNED        0
#define IN_9_WORDLENGTH      8
#define IN_9_FIXPOINTSCALING 1
#define IN_9_FRACTIONLENGTH  9
#define IN_9_BIAS            0
#define IN_9_SLOPE           0.125
/* Input Port  10 */
#define IN_PORT_10_NAME      lla
#define INPUT_10_WIDTH       3
#define INPUT_DIMS_10_COL    1
#define INPUT_10_DTYPE       real_T
#define INPUT_10_COMPLEX     COMPLEX_NO
#define IN_10_FRAME_BASED    FRAME_NO
#define IN_10_BUS_BASED      0
#define IN_10_BUS_NAME       
#define IN_10_DIMS           1-D
#define INPUT_10_FEEDTHROUGH 1
#define IN_10_ISSIGNED        0
#define IN_10_WORDLENGTH      8
#define IN_10_FIXPOINTSCALING 1
#define IN_10_FRACTIONLENGTH  9
#define IN_10_BIAS            0
#define IN_10_SLOPE           0.125
/* Input Port  11 */
#define IN_PORT_11_NAME      fix_type
#define INPUT_11_WIDTH       1
#define INPUT_DIMS_11_COL    1
#define INPUT_11_DTYPE       uint8_T
#define INPUT_11_COMPLEX     COMPLEX_NO
#define IN_11_FRAME_BASED    FRAME_NO
#define IN_11_BUS_BASED      0
#define IN_11_BUS_NAME       
#define IN_11_DIMS           1-D
#define INPUT_11_FEEDTHROUGH 1
#define IN_11_ISSIGNED        0
#define IN_11_WORDLENGTH      8
#define IN_11_FIXPOINTSCALING 1
#define IN_11_FRACTIONLENGTH  9
#define IN_11_BIAS            0
#define IN_11_SLOPE           0.125
/* Input Port  12 */
#define IN_PORT_12_NAME      gnd_vel
#define INPUT_12_WIDTH       1
#define INPUT_DIMS_12_COL    1
#define INPUT_12_DTYPE       real_T
#define INPUT_12_COMPLEX     COMPLEX_NO
#define IN_12_FRAME_BASED    FRAME_NO
#define IN_12_BUS_BASED      0
#define IN_12_BUS_NAME       
#define IN_12_DIMS           1-D
#define INPUT_12_FEEDTHROUGH 1
#define IN_12_ISSIGNED        0
#define IN_12_WORDLENGTH      8
#define IN_12_FIXPOINTSCALING 1
#define IN_12_FRACTIONLENGTH  9
#define IN_12_BIAS            0
#define IN_12_SLOPE           0.125
/* Input Port  13 */
#define IN_PORT_13_NAME      v_ned
#define INPUT_13_WIDTH       3
#define INPUT_DIMS_13_COL    1
#define INPUT_13_DTYPE       real_T
#define INPUT_13_COMPLEX     COMPLEX_NO
#define IN_13_FRAME_BASED    FRAME_NO
#define IN_13_BUS_BASED      0
#define IN_13_BUS_NAME       
#define IN_13_DIMS           1-D
#define INPUT_13_FEEDTHROUGH 1
#define IN_13_ISSIGNED        0
#define IN_13_WORDLENGTH      8
#define IN_13_FIXPOINTSCALING 1
#define IN_13_FRACTIONLENGTH  9
#define IN_13_BIAS            0
#define IN_13_SLOPE           0.125
/* Input Port  14 */
#define IN_PORT_14_NAME      cog
#define INPUT_14_WIDTH       1
#define INPUT_DIMS_14_COL    1
#define INPUT_14_DTYPE       real_T
#define INPUT_14_COMPLEX     COMPLEX_NO
#define IN_14_FRAME_BASED    FRAME_NO
#define IN_14_BUS_BASED      0
#define IN_14_BUS_NAME       
#define IN_14_DIMS           1-D
#define INPUT_14_FEEDTHROUGH 1
#define IN_14_ISSIGNED        0
#define IN_14_WORDLENGTH      8
#define IN_14_FIXPOINTSCALING 1
#define IN_14_FRACTIONLENGTH  9
#define IN_14_BIAS            0
#define IN_14_SLOPE           0.125
/* Input Port  15 */
#define IN_PORT_15_NAME      target_sys_id
#define INPUT_15_WIDTH       1
#define INPUT_DIMS_15_COL    1
#define INPUT_15_DTYPE       uint8_T
#define INPUT_15_COMPLEX     COMPLEX_NO
#define IN_15_FRAME_BASED    FRAME_NO
#define IN_15_BUS_BASED      0
#define IN_15_BUS_NAME       
#define IN_15_DIMS           1-D
#define INPUT_15_FEEDTHROUGH 1
#define IN_15_ISSIGNED        0
#define IN_15_WORDLENGTH      8
#define IN_15_FIXPOINTSCALING 1
#define IN_15_FRACTIONLENGTH  9
#define IN_15_BIAS            0
#define IN_15_SLOPE           0.125
/* Input Port  16 */
#define IN_PORT_16_NAME      msg_id
#define INPUT_16_WIDTH       1
#define INPUT_DIMS_16_COL    1
#define INPUT_16_DTYPE       uint8_T
#define INPUT_16_COMPLEX     COMPLEX_NO
#define IN_16_FRAME_BASED    FRAME_NO
#define IN_16_BUS_BASED      0
#define IN_16_BUS_NAME       
#define IN_16_DIMS           1-D
#define INPUT_16_FEEDTHROUGH 1
#define IN_16_ISSIGNED        0
#define IN_16_WORDLENGTH      8
#define IN_16_FIXPOINTSCALING 1
#define IN_16_FRACTIONLENGTH  9
#define IN_16_BIAS            0
#define IN_16_SLOPE           0.125

#define NUM_OUTPUTS          1
/* Output Port  0 */
#define OUT_PORT_0_NAME      y
#define OUTPUT_0_WIDTH       1
#define OUTPUT_DIMS_0_COL    1
#define OUTPUT_0_DTYPE       real_T
#define OUTPUT_0_COMPLEX     COMPLEX_NO
#define OUT_0_FRAME_BASED    FRAME_NO
#define OUT_0_BUS_BASED      0
#define OUT_0_BUS_NAME       
#define OUT_0_DIMS           1-D
#define OUT_0_ISSIGNED        1
#define OUT_0_WORDLENGTH      8
#define OUT_0_FIXPOINTSCALING 1
#define OUT_0_FRACTIONLENGTH  3
#define OUT_0_BIAS            0
#define OUT_0_SLOPE           0.125

#define NPARAMS              0

#define SAMPLE_TIME_0        INHERITED_SAMPLE_TIME
#define NUM_DISC_STATES      0
#define DISC_STATES_IC       [0]
#define NUM_CONT_STATES      0
#define CONT_STATES_IC       [0]

#define SFUNWIZ_GENERATE_TLC 1
#define SOURCEFILES "__SFB__"
#define PANELINDEX           6
#define USE_SIMSTRUCT        0
#define SHOW_COMPILE_STEPS   1                   
#define CREATE_DEBUG_MEXFILE 1
#define SAVE_CODE_ONLY       0
#define SFUNWIZ_REVISION     3.0
/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"

extern void mavlink_msg_gen_sfuntion_Outputs_wrapper(const real_T *time_usecs,
                          const real_T *accel,
                          const real_T *gyro,
                          const real_T *mag,
                          const real_T *euler,
                          const real_T *quat,
                          const real_T *abs_pressure,
                          const real_T *diff_pressure,
                          const real_T *temperature,
                          const real_T *v_body,
                          const real_T *lla,
                          const uint8_T *fix_type,
                          const real_T *gnd_vel,
                          const real_T *v_ned,
                          const real_T *cog,
                          const uint8_T *target_sys_id,
                          const uint8_T *msg_id,
                          real_T *y);

/*====================*
 * S-function methods *
 *====================*/
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{

    DECL_AND_INIT_DIMSINFO(inputDimsInfo);
    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    ssSetNumSFcnParams(S, NPARAMS);
     if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
	 return; /* Parameter mismatch will be reported by Simulink */
     }

    ssSetNumContStates(S, NUM_CONT_STATES);
    ssSetNumDiscStates(S, NUM_DISC_STATES);

    if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;
    /*Input Port 0 */
    ssSetInputPortWidth(S,  0, INPUT_0_WIDTH); /* */
    ssSetInputPortDataType(S, 0, SS_DOUBLE);
    ssSetInputPortComplexSignal(S,  0, INPUT_0_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/

    /*Input Port 1 */
    ssSetInputPortWidth(S,  1, INPUT_1_WIDTH);
    ssSetInputPortDataType(S, 1, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 1, INPUT_1_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 1, INPUT_1_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 1, 1); /*direct input signal access*/

    /*Input Port 2 */
    ssSetInputPortWidth(S,  2, INPUT_2_WIDTH);
    ssSetInputPortDataType(S, 2, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 2, INPUT_2_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 2, INPUT_2_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 2, 1); /*direct input signal access*/

    /*Input Port 3 */
    ssSetInputPortWidth(S,  3, INPUT_3_WIDTH);
    ssSetInputPortDataType(S, 3, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 3, INPUT_3_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 3, INPUT_3_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 3, 1); /*direct input signal access*/

    /*Input Port 4 */
    ssSetInputPortWidth(S,  4, INPUT_4_WIDTH);
    ssSetInputPortDataType(S, 4, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 4, INPUT_4_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 4, INPUT_4_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 4, 1); /*direct input signal access*/

    /*Input Port 5 */
    ssSetInputPortWidth(S,  5, INPUT_5_WIDTH);
    ssSetInputPortDataType(S, 5, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 5, INPUT_5_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 5, INPUT_5_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 5, 1); /*direct input signal access*/

    /*Input Port 6 */
    ssSetInputPortWidth(S,  6, INPUT_6_WIDTH); /* */
    ssSetInputPortDataType(S, 6, SS_DOUBLE);
    ssSetInputPortComplexSignal(S,  6, INPUT_6_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 6, INPUT_6_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 6, 1); /*direct input signal access*/

    /*Input Port 7 */
    ssSetInputPortWidth(S,  7, INPUT_7_WIDTH); /* */
    ssSetInputPortDataType(S, 7, SS_DOUBLE);
    ssSetInputPortComplexSignal(S,  7, INPUT_7_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 7, INPUT_7_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 7, 1); /*direct input signal access*/

    /*Input Port 8 */
    ssSetInputPortWidth(S,  8, INPUT_8_WIDTH); /* */
    ssSetInputPortDataType(S, 8, SS_DOUBLE);
    ssSetInputPortComplexSignal(S,  8, INPUT_8_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 8, INPUT_8_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 8, 1); /*direct input signal access*/

    /*Input Port 9 */
    ssSetInputPortWidth(S,  9, INPUT_9_WIDTH);
    ssSetInputPortDataType(S, 9, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 9, INPUT_9_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 9, INPUT_9_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 9, 1); /*direct input signal access*/

    /*Input Port 10 */
    ssSetInputPortWidth(S,  10, INPUT_10_WIDTH);
    ssSetInputPortDataType(S, 10, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 10, INPUT_10_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 10, INPUT_10_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 10, 1); /*direct input signal access*/

    /*Input Port 11 */
    ssSetInputPortWidth(S,  11, INPUT_11_WIDTH); /* */
    ssSetInputPortDataType(S, 11, SS_UINT8);
    ssSetInputPortComplexSignal(S,  11, INPUT_11_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 11, INPUT_11_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 11, 1); /*direct input signal access*/

    /*Input Port 12 */
    ssSetInputPortWidth(S,  12, INPUT_12_WIDTH); /* */
    ssSetInputPortDataType(S, 12, SS_DOUBLE);
    ssSetInputPortComplexSignal(S,  12, INPUT_12_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 12, INPUT_12_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 12, 1); /*direct input signal access*/

    /*Input Port 13 */
    ssSetInputPortWidth(S,  13, INPUT_13_WIDTH);
    ssSetInputPortDataType(S, 13, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 13, INPUT_13_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 13, INPUT_13_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 13, 1); /*direct input signal access*/

    /*Input Port 14 */
    ssSetInputPortWidth(S,  14, INPUT_14_WIDTH); /* */
    ssSetInputPortDataType(S, 14, SS_DOUBLE);
    ssSetInputPortComplexSignal(S,  14, INPUT_14_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 14, INPUT_14_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 14, 1); /*direct input signal access*/

    /*Input Port 15 */
    ssSetInputPortWidth(S,  15, INPUT_15_WIDTH); /* */
    ssSetInputPortDataType(S, 15, SS_UINT8);
    ssSetInputPortComplexSignal(S,  15, INPUT_15_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 15, INPUT_15_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 15, 1); /*direct input signal access*/

    /*Input Port 16 */
    ssSetInputPortWidth(S,  16, INPUT_16_WIDTH); /* */
    ssSetInputPortDataType(S, 16, SS_UINT8);
    ssSetInputPortComplexSignal(S,  16, INPUT_16_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 16, INPUT_16_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 16, 1); /*direct input signal access*/


    if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;
    ssSetOutputPortWidth(S, 0, OUTPUT_0_WIDTH);
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);
    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumPWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                     SS_OPTION_USE_TLC_WITH_ACCELERATOR | 
		     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

# define MDL_SET_INPUT_PORT_FRAME_DATA
static void mdlSetInputPortFrameData(SimStruct  *S, 
                                     int_T      port,
                                     Frame_T    frameData)
{
    ssSetInputPortFrameData(S, port, frameData);
}
/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME_0);
    ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetInputPortDataType( S, 0, dType);
}
#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
  ssSetInputPortDataType( S, 0, SS_DOUBLE);
 ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}
/* Function: mdlOutputs =======================================================
 *
*/
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const real_T   *time_usecs  = (const real_T*) ssGetInputPortSignal(S,0);
    const real_T   *accel  = (const real_T*) ssGetInputPortSignal(S,1);
    const real_T   *gyro  = (const real_T*) ssGetInputPortSignal(S,2);
    const real_T   *mag  = (const real_T*) ssGetInputPortSignal(S,3);
    const real_T   *euler  = (const real_T*) ssGetInputPortSignal(S,4);
    const real_T   *quat  = (const real_T*) ssGetInputPortSignal(S,5);
    const real_T   *abs_pressure  = (const real_T*) ssGetInputPortSignal(S,6);
    const real_T   *diff_pressure  = (const real_T*) ssGetInputPortSignal(S,7);
    const real_T   *temperature  = (const real_T*) ssGetInputPortSignal(S,8);
    const real_T   *v_body  = (const real_T*) ssGetInputPortSignal(S,9);
    const real_T   *lla  = (const real_T*) ssGetInputPortSignal(S,10);
    const uint8_T   *fix_type  = (const uint8_T*) ssGetInputPortSignal(S,11);
    const real_T   *gnd_vel  = (const real_T*) ssGetInputPortSignal(S,12);
    const real_T   *v_ned  = (const real_T*) ssGetInputPortSignal(S,13);
    const real_T   *cog  = (const real_T*) ssGetInputPortSignal(S,14);
    const uint8_T   *target_sys_id  = (const uint8_T*) ssGetInputPortSignal(S,15);
    const uint8_T   *msg_id  = (const uint8_T*) ssGetInputPortSignal(S,16);
    real_T        *y  = (real_T *)ssGetOutputPortRealSignal(S,0);

    mavlink_msg_gen_sfuntion_Outputs_wrapper(time_usecs, accel, gyro, mag, euler, quat, abs_pressure, diff_pressure, temperature, v_body, lla, fix_type, gnd_vel, v_ned, cog, target_sys_id, msg_id, y);
}



/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
}
#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif


