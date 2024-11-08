// Write your Student class here
class Student {
    private: 
        int score[5];
        int total;
    public:
        
        int calculateTotalScore() {
            return total;
        }
    
        void input() {
            for(int i = 0; i < 5; i++) {
                cin >> score[i];
                total += score[i];
            }    
        }
};
