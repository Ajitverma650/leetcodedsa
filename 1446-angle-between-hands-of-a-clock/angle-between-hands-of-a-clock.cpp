class Solution {
public:
    double angleClock(int hour, int minutes) {
        

        double ang=0;
        ang=abs((30*hour+0.5*minutes)-6*minutes);

        ang=min(ang , 360-ang);

        return ang;
    }
};