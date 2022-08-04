#pragma once
/******************************************************************************/
/* File   : McalEep.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstMcalEep.hpp"
#include "CfgMcalEep.hpp"
#include "McalEep_core.hpp"
#include "infMcalEep_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalEep:
      INTERFACES_EXPORTED_EEP
      public abstract_module
   ,  public class_McalEep_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalEep_Type* lptrConst = (ConstMcalEep_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, EEP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, EEP_CONST,       EEP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   EEP_CONFIG_DATA, EEP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, EEP_CODE) DeInitFunction (void);
      FUNC(void, EEP_CODE) MainFunction   (void);
      EEP_CORE_FUNCTIONALITIES
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
extern VAR(module_McalEep, EEP_VAR) McalEep;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

