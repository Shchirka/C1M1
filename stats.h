/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief include declarations and documentation for the functions from the stats.c file
 *
 *
 *
 * @author Antonina Shchirska
 * @date 27.04.2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
#define SIZE

/**
 * @brief Finds the maximum value in array
 *
 * This function takes as an input an array and its size. This will find the
 * maximum value of the array.
 *
 * @param ptr The link to the array
 * @param count The size of the array
 * 
 *
 * @return max The maximum value in the array
 */

int find_maximum(int * ptr, int count);

/**
 * @brief Finds the minimum value in array
 *
 * This function takes as an input an array and its size. This will find the
 * minimum value of the array.
 *
 * @param ptr The link to the array
 * @param count The size of the array
 * 
 *
 * @return min The minimum value in the array
 */

int find_minimum(int * ptr, int count);

/**
 * @brief Finds the average value in array
 *
 * This function takes as an input an array and its size. This will find the
 * average value of the array.
 *
 * @param ptr The link to the array
 * @param count The size of the array
 * 
 *
 * @return mean The average value in the array
 */

int find_mean(int * ptr, int count);

/**
 * @brief Finds the median value in array
 *
 * This function takes as an input an array and its size. This will find the
 * median value of the array.
 *
 * @param ptr The array
 * @param count The size of the array
 * 
 *
 * @return median The median value in the array
 */

int find_median(int ptr[SIZE], int count);

/**
 * @brief Sorts the array from largest to smallest
 *
 * This function takes as an input an array and its size. This will sort the
 * array from largest to smallest using algorythm.
 *
 * @param ptr The link to the array
 * @param count The size of the array
 * 
 *
 * @return array The sorted array
 */

void sort_array(int * ptr, int count);

/**
 * @brief Prints the array
 *
 * This function takes as an input an array and its size. This will print the
 * array on the screen.
 *
 * @param ptr The array
 * @param count The size of the array
 * 
 *
 *
 */

void print_array(int ptr[SIZE], int count);

/**
 * @brief Printss statistics of the array
 *
 * This function takes as an input an array. This will print the main stats
 * of the array such as: maximum value, minimum value, average value and
 * median value.
 *
 * @param ptr The array
 * 
 *
 * @return Array statistics
 */

void print_statistics(int ptr[SIZE]);

#endif /* __STATS_H__ */
