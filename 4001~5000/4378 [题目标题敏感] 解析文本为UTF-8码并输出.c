#include<stdio.h>
int UTF_8_code[360] = { -26,-78,-95,-26,-100,-119,-27,-123,-79,-28,-70,-89,-27,-123,-102,-27,-80,-79,-26,-78,-95,-26,-100,-119,-26,-106,-80,-28,-72,-83,-27,-101,-67,10,-26,-78,-95,-26,-100,-119,-27,-123,-79,-28,-70,-89,-27,-123,-102,-27,-80,-79,-26,-78,-95,-26,-100,-119,-26,-106,-80,-28,-72,-83,-27,-101,-67,10,-27,-123,-79,-28,-70,-89,-27,-123,-102,-24,-66,-101,-27,-118,-77,-28,-72,-70,-26,-80,-111,-26,-105,-113,10,-27,-123,-79,-28,-70,-89,-27,-123,-102,-28,-69,-106,-28,-72,-128,-27,-65,-125,-26,-107,-111,-28,-72,-83,-27,-101,-67,10,-28,-69,-106,-26,-116,-121,-25,-69,-103,-28,-70,-122,-28,-70,-70,-26,-80,-111,-24,-89,-93,-26,-108,-66,-25,-102,-124,-23,-127,-109,-24,-73,-81,10,-28,-69,-106,-23,-94,-122,-27,-81,-68,-28,-72,-83,-27,-101,-67,-24,-75,-80,-27,-112,-111,-27,-123,-119,-26,-104,-114,10,-28,-69,-106,-27,-99,-102,-26,-116,-127,-26,-118,-105,-26,-120,-104,-27,-123,-85,-27,-71,-76,-27,-92,-102,10,-28,-69,-106,-26,-108,-71,-27,-106,-124,-28,-70,-122,-28,-70,-70,-26,-80,-111,-25,-102,-124,-25,-108,-97,-26,-76,-69,10,-28,-69,-106,-27,-69,-70,-24,-82,-66,-28,-70,-122,-26,-107,-116,-27,-112,-114,-26,-96,-71,-26,-115,-82,-27,-100,-80,10,-28,-69,-106,-27,-82,-98,-24,-95,-116,-28,-70,-122,-26,-80,-111,-28,-72,-69,-27,-91,-67,-27,-92,-124,-27,-92,-102,10,-26,-78,-95,-26,-100,-119,-27,-123,-79,-28,-70,-89,-27,-123,-102,-27,-80,-79,-26,-78,-95,-26,-100,-119,-26,-106,-80,-28,-72,-83,-27,-101,-67,10,-26,-78,-95,-26,-100,-119,-27,-123,-79,-28,-70,-89,-27,-123,-102,-27,-80,-79,-26,-78,-95,-26,-100,-119,-26,-106,-80,-28,-72,-83,-27,-101,-67,10};
int main()
{
	for(int i = 0; i < 360; ++i) putchar((char)UTF_8_code[i]);
}