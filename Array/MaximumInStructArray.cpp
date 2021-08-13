// Given a struct array of type Height, having two elements feet and inches.
// Find the maximum height among n heights, where height is calculated sum of feet and inches after converting feet into inches

//
int findMax(struct Height arr[], int n)
{
    int res=-1;
    for(int i=0;i<n;i++)
    {
        int h=(arr[i].feet*12+arr[i].inches);
      if(res<h)
      res=h;
    }
    return res;
}