//
// Created by Maikol Guzman on 8/20/20.
//

#ifndef UNIT_TESTING_01_CATCH2_TEMP_H
#define UNIT_TESTING_01_CATCH2_TEMP_H


class Temp {
public:
    Temp();

    Temp(int tmp);

    virtual ~Temp();

    int getTmp() const;

    void setTmp(int tmp);

private:
    int tmp;
};


#endif //UNIT_TESTING_01_CATCH2_TEMP_H
