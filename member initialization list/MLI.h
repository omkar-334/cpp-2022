#ifndef MLI_H
#define MLI_H


class MLI
{
    public:
        MLI(int a, int b);
        void output();
        virtual ~MLI();

    protected:

    private:
        int regVar;
        const int constVar;

};

#endif // MLI_H
