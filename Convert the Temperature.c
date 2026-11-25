/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double*result=malloc(2*sizeof(double));

    result[0]=celsius+273.15;
    result[1]=celsius*1.8+32.0;
    *returnSize=2;

    return result;
    //convert a temperature in celsius into Kelvin and Fahrenheit
}
