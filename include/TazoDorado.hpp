class TazoDorado
{
private:
    bool flotando;
public:
    TazoDorado() {
        this->flotando = false;
    }
    void inicializar() {
        this->flotando = false;
    }
    ~TazoDorado() {}
    void Flotar(){
        this->flotando = true;
    }

    bool IsFloating(){
        return this->flotando;
    }
};