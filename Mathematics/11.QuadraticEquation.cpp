class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector <int> roots;
        int r1=0, r2=0;
        int temp = (pow(b,2)- 4* a * c);
        if(temp<0)                       //then imaginary roots
           roots.push_back(-1);
        else
           {
                r1 = floor((-b + sqrt(temp)) / (2 * a));
            // root2
                r2 = floor((-b - sqrt(temp)) / (2 * a));

                roots.push_back(max(r1, r2));
                roots.push_back(min(r1, r2));
              
           }
        return roots;
    }
};
