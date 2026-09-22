#include <iostream>

int main() 
{
	float w, h, BMI = 0;
	printf("輸入體重(公斤)與身高(公尺)");
	scanf_s("%f %f", &w, &h);
	BMI = w / (h * h);
	if (BMI < 18.5)
	{
		printf("Underweight");
	}
	else if (BMI >= 18.5 && BMI < 25)
	{
		printf("Normal");
	}
	else if (BMI >= 25.0 && BMI < 30.0)
	{
		printf("Overweight");
	}
	else
	{
		printf("Obese");
	}
}