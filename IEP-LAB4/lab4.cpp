using namespace std;
#include <iostream>

int count=0;

class Snack
{
protected:
    int qty;
public:
    int nr;

    Snack(){
        cout<<"need more snacks \n";
        count++;
        nr=count;
    }
    Snack(int qty){
        this->qty=qty;
        count++;
        nr=count;
    };
    ~Snack(){
        cout<<"no more snacks :( "<<nr<<endl;
    };
    Snack(const Snack &s){
        qty = s.qty;
        cout<<"Copy constr \n";
    }
    int getSnackQty(){
        return qty;
    }
};

class Jelly:public Snack 
{
    private:
        int sugarScale;
    
    public:
        Jelly(int qty, int sugarScale){
            this->qty=qty;
            this->sugarScale=sugarScale;
        };
        int getJellySugarScale(){
            return sugarScale;
        }
};


int main(){
    Snack a;
    cout<<a.getSnackQty()<<endl;
    Snack b(4);
    cout<<b.getSnackQty()<<endl;
    Snack c = b;
    cout<<c.getSnackQty()<<endl;
    cout<<endl;

    Jelly j(3,10);
    cout<<j.getJellySugarScale()<<endl;
    cout<<j.getSnackQty()<<endl;
}



