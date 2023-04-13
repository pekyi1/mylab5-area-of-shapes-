
float Square(float lenght);
float Triangle(float base, float height);
float Circle(float radius);
float Rectangle(float lenght, float width);

int main(){
float area;
printf("Shape 1\nIt contains a triangle and a rectangle.\n");
area = Circle(4)/2 + Rectangle(12,8);
printf("Area of shape 1 = %.2fft\n\n ", area);

printf("Shape 2\nIt contains a Triangle and a rectangle.\n");
area = Triangle(8,6) + Rectangle(13,8);
printf("Area of shape 2 = %.2fIn\n\n ", area);

printf("Shape 4\nIt contains a semi-circle and a Triangle.\n");
area = Circle(8)/2 + Triangle(8,7);
printf("Area of shape 4 = %.2fft\n\n ", area);
}

float Square(float lenght){
float areaofSquare= lenght*lenght;
return areaofSquare;
}

float Triangle(float base, float height){
float areaofTriangle= (base*height)/2;
return areaofTriangle;
}

float Circle(float radius){
float areaofCircle=3.142*radius*radius;
return areaofCircle;
}

float Rectangle(float lenght, float width){
float areaofRectangle=lenght*width;
return areaofRectangle;
}

