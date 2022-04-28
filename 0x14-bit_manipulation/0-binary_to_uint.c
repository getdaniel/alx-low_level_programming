#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned into.
 *
 * @b: String of binary number.
 *
 * Return: The converted number.
unsigned int binary_to_uint(const char *b)
{
       int index;
       unsigned int deci_val = 0;

       if (!b)
           return (0);
       for (index = 0; index[b]; index++)
       {
             if (b[index] < '0' || b[index] > '1')
                   return (0);
             deci_val = 2 * deci_val + (b[index] - '0');
       }
       
       return (deci_val);
}
