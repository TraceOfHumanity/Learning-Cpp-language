#include <iostream>

void initializeArray(int array[], int arraySize)
{
  for (int i = 0; i <= arraySize; i++)
  {
    array[i] = i;
  }
};

void printArray(int array[], int arraySize)
{
  for (int i = 0; i <= arraySize; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
};

int linearSearch(int array[], int arraySize, int find, bool isFind = false)
{
  for (int i = 0; i <= arraySize; i++)
  {
    if (array[i] == find)
    {
      isFind = true;
      std::cout << "Found " << find << " at index " << i << std::endl;
      return i;
    }
  }
  return -1;
}
