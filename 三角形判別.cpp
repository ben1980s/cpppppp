namespace Triangle
{
    bool isTriangle(int a, int b, int c)
    {
        int arr[] = { a, b, c };
        std::sort(arr, arr + 3);
        if (arr[0] <= 0 || arr[1] <= 0 || arr[2] <= 0)
        {
            return false;
        }
        else if (arr[0] + arr[1] > arr[2])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
