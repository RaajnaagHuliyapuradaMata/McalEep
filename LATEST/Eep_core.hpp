#pragma once
/******************************************************************************/
/* File   : Eep_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_Eep.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EEP_COREFUNCTIONALITIES                                                \
              FUNC(void, EEP_CODE) SetMode        (void);                      \
              FUNC(void, EEP_CODE) Read           (void);                      \
              FUNC(void, EEP_CODE) Write          (void);                      \
              FUNC(void, EEP_CODE) Erase          (void);                      \
              FUNC(void, EEP_CODE) Compare        (void);                      \
              FUNC(void, EEP_CODE) Cancel         (void);                      \
              FUNC(void, EEP_CODE) GetStatus      (void);                      \
              FUNC(void, EEP_CODE) GetJobResult   (void);                      \

#define EEP_COREFUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, EEP_CODE) SetMode        (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Read           (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Write          (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Erase          (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Compare        (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Cancel         (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) GetStatus      (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) GetJobResult   (void) = 0;                  \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Eep_Functionality{
   public:
      EEP_COREFUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

