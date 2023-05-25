/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:12:40 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/25 18:46:57 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(void)
{
    int arr[MAX];
    int n;
    int i;
    int j;
    int temp;

    printf("Enter the number of elements (up to %d): ", MAX);
    scanf("%d", &n);

    //Input values in the array
    for (i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    // Display the array before sorting
    printf("Array before sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sorting the array using bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // ascending order
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Array after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
