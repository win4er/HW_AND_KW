#include "testsorts.hpp"

void test_BubbleSort(){
    std::cout << "\t---" << __func__ << "---" << std::endl;
    int count_test = 1;
    {
        int ar[] = {1, 2, 3, 4, 0};
        bubble_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {1, 2, 3, 4, 5};
        bubble_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }

    {
        int ar[] = {0, -1, 5, 8, -3, 3, 7};
        bubble_sort(ar, 7);
        std::cout << "Test_";
        if (typeAr(ar, 7) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -999, -3, -9, -8};
        bubble_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -2, -3, -8, -8};
        bubble_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
}

void test_InsertionSort(){
    std::cout << "\t---" << __func__ << "---" << std::endl;
    int count_test = 1;
    {
        int ar[] = {1, 2, 3, 4, 0};
        insertion_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {1, 2, 3, 4, 5};
        insertion_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }

    {
        int ar[] = {0, -1, 5, 8, -3, 3, 7};
        insertion_sort(ar, 7);
        std::cout << "Test_";
        if (typeAr(ar, 7) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -999, -3, -9, -8};
        insertion_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -2, -3, -8, -8};
        insertion_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
}

void test_SelectionSort(){
    std::cout << "\t---" << __func__ << "---" << std::endl;
    int count_test = 1;
    {
        int ar[] = {1, 2, 3, 4, 0};
        selection_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {1, 2, 3, 4, 5};
        selection_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }

    {
        int ar[] = {0, -1, 5, 8, -3, 3, 7};
        selection_sort(ar, 7);
        std::cout << "Test_";
        if (typeAr(ar, 7) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -999, -3, -9, -8};
        selection_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -8, -3, -8, -8};
        selection_sort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
}

void test_QuickSort(){
    std::cout << "\t---" << __func__ << "---" << std::endl;
    int count_test = 1;
    {
        int ar[] = {1, 2, 3, 4, 0};
        quickSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {1, 2, 3, 4, 5};
        quickSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }

    {
        int ar[] = {0, -1, 5, 8, -3, 3, 7};
        quickSort(ar, 7);
        std::cout << "Test_";
        if (typeAr(ar, 7) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -999, -3, -9, -8};
        quickSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -2, -3, -8, -8};
        quickSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
}

void test_MergeSort(){
    std::cout << "\t---" << __func__ << "---" << std::endl;
    int count_test = 1;
    {
        int ar[] = {1, 2, 3, 4, 0};
        mergeSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {1, 2, 3, 4, 5};
        mergeSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }

    {
        int ar[] = {0, -1, 5, 8, -3, 3, 7};
        mergeSort(ar, 7);
        std::cout << "Test_";
        if (typeAr(ar, 7) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -999, -3, -9, -8};
        mergeSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
    {
        int ar[] = {-1, -2, -3, -8, -8};
        mergeSort(ar, 5);
        std::cout << "Test_";
        if (typeAr(ar, 5) == 1)
            std::cout << count_test << " complete" << std::endl;
        else
            std::cout << count_test << " wrong" << std::endl;
        count_test++;
    }
}