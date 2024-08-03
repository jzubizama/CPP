#include"Point.hpp"

Fixed CalcTriArea(Point v1, Point v2, Point v3)
{
  Fixed det(0.0f);

  det = ((v1.get_x() - v3.get_x()) * (v2.get_y() - v3.get_y())) - ((v2.get_x() - v3.get_x()) * (v1.get_y() - v3.get_y())) / Fixed(2);
  return (det);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
  Fixed TotalArea = CalcTriArea(a, b, c);
  Fixed Area1 = CalcTriArea(point, b, c);
  Fixed Area2 = CalcTriArea(point, a, c);
  Fixed Area3 = CalcTriArea(point, a, b);

  //std::cout << "Area " << Area1 << std::endl;
  if((Area1 + Area2 + Area3) > TotalArea)
    return false;
  else
    return true;
}
