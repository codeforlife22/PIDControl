# Reflection

## Effect of P, I, D components 

1. P: steers the car in propotional to cross track error.
  If the value is too large, the controller may overshoot (the car weaves on the track). On the contrary, 
  if the value is too small, then it takes the car too long to reach the trajectory as the steering angle
  barely changes.
2. D: to compensate `P` component and prevents overshoot
   In addition to the current cross track error, the rate of change with respect to CTE is also being accounted for
   to prevent sudden changes. 
   If the value is too large, there will be too much counter-steering, so the steering angle may not change fast enough. 
   If the value is too small, the effect of correction is negligible. 
3. I: to counter systematic bias such as misaligned wheels.
   Helps the system to steer better if there is sustained errors in the system.

## How the parameters are selected,

The selected params for PID are 0.1, 0.004, and 3.0, respectively. They are selected manually, starting with a guess and
fine-tuning based on the behavior of the vehicle in the simulator.
