#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 6.3 rek/laba 6.3 rek.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTestProject
{
    TEST_CLASS(MinFunctionTest)
    {
    public:

        TEST_METHOD(TestMinFunction)
        {
            // ���� ��� ������, � ����� ��������� �������� ������� - 3
            int arr1[] = { 2, 4, 6, 8, 3, 7, 9 };
            int size1 = 7;
            int expected1 = 3;
            int result1 = Min(arr1, size1, 3, 3);
            Assert::AreEqual(expected1, result1);

            // ���� ��� ������, � ����� ���� �������� ��������
            int arr2[] = { 2, 4, 6, 8 };
            int size2 = 4;
            int expected2 = 0; // ������� ���� �������� ��������, ������� ������� ��������� 0
            int result2 = Min(arr2, size2, 0, 0);
            Assert::AreEqual(expected2, result2);

            // ���� ��� ������ � ����� ���������
            int arr3[] = { 7 };
            int size3 = 1;
            int expected3 = 7;
            int result3 = Min(arr3, size3, 7, 6);
            Assert::AreEqual(expected3, result3);
        }
    };
}
