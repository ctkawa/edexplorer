#ifndef ELEMENTO_H
#define ELEMENTO_H


class elemento
{
    public:
        elemento();
        virtual ~elemento();
        int conteudo;
        elemento& operator=(int esq){
            conteudo = esq;
            return *this;
        };

    protected:
    private:

};

#endif // ELEMENTO_H
