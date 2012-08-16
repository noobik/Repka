#include<vector>

class vrag
{
public:
	virtual ~vrag();
	void Die();
	void Ap();
	void vdraw();
	void sound()
		{
		std::cout<<"я тебя покараю!;
		}
private:
	int health;
	int m_x;
	int m_y;
	int m_body;
	
};               
