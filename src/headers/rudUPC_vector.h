/**
  * @file rudyUPC_vector.h
  * @author Kurt Robert Rudolph
  * @description simple vector operations
  * in UPC.
  */


#ifndef __RUDY_UPC__VECTOR_H__
#define __RUDY_UPC__VECTOR_H_

#include <rudyUPC.h>


/** 
  * @brief Performs a dot product of two vectors
  * @param sharedVectorA The first vector of the dot product
  * @param sharedVectorB The second vector of the dot product
  * @return A pointer to a shared double containing the value computed
  */
shared double * rudyUPC_vector_dotProduct( shared double * sharedVectorA, shared double * sharedVectorB);



