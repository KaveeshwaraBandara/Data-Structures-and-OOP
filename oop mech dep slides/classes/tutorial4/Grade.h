//Following preprocessor wrapper is used to prevent errors casued by miltiple inclusions of the same
//header file
#ifndef GRADE_H //only if GRADE_H is NOT being defined previously, following block will be added
#define GRADE_H //Define GRADE_H
class Grade{
private:
    float Mathematics, Science;
    char Name[25];
    char GradeMaths, GradeScience;
    char GetGrade(float mark);
public:
    void SetName(char name[]);
    void SetMarks(float maths, float science);
    void ShowResults();
};
#endif //end of #ifndef block