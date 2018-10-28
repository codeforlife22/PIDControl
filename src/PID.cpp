#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID()
  : prev_cte(0.0), total_cte(0.0)
{

}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd)
{
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
  p_error = d_error = i_error = 0.0;


}

void PID::UpdateError(double cte) {
  total_cte += cte;
  p_error = -Kp * cte;
  i_error = -Ki * total_cte;
  d_error = -Kd * (cte - prev_cte);

  prev_cte = cte;
}

double PID::TotalError() {
  return p_error + i_error + d_error;
}

