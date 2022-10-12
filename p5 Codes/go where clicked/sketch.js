let x, y; //starting point
let radius = 50;
let z = 0;
let flag = 0;
let x_pos, y_pos; //destination
let base_speed = 5;
let x_speed = 0;
let y_speed = 0;

function setup() {
  createCanvas(750, 563);
  x = random(radius, width - radius);
  x = parseInt(x);
  y = random(radius, height - radius);
  y = parseInt(y);
  fill(255);

}

function draw() {
  background(0);
  circle(x, y, radius);

  /*if (mouseIsPressed) {     
    //same as mouseClicked just that destination
    //coordinates trail the mouse when dragged
    //as mouseIsPressed = 1 when dragged as well
  }*/

  stroke(255);
  line(x, y, x_pos, y_pos);

  if (dist(x, y, x_pos, y_pos) != 0 && flag == 1)
    move();

  if (dist(x, y, x_pos, y_pos).toFixed() == 0)
    flag = 0;

  readings();

}

function readings() {
  textSize(15);
  textFont('Consolas');
  textAlign(RIGHT);

  if (dist(x, y, x_pos, y_pos).toFixed() == 0)
    stroke(200, 0, 0);
  else
    stroke(0);

  text(`flag = ${flag}`, width - 50, 30);
  text(`x_pos = ${x_pos}`, width - 50, 50);
  text(`x = ${x.toFixed(2)}`, width - 50, 70);
  text(`y_pos = ${y_pos}`, width - 50, 90);
  text(`y = ${y.toFixed(2)}`, width - 50, 110);
  text(`x_speed = ${x_speed.toFixed(4)}`, width - 50, 130);
  text(`y_speed = ${y_speed.toFixed(4)}`, width - 50, 150);
  let v, v_speed;
  v = (x_speed ** 2) + (y_speed ** 2); //sum of square of speeds
  v_speed = v ** 0.5; //same as Math.sqrt()  
  text(`vector speed = ${v_speed.toFixed(4)}`, width - 50, 170);
  text(`distance offset = ${dist(x, y, x_pos, y_pos).toFixed(4)}`, width - 50, 190);

}

function move() {
  if (x < x_pos)
    x += x_speed;
  if (x > x_pos)
    x -= x_speed;
  if (y < y_pos)
    y += y_speed;
  if (y > y_pos)
    y -= y_speed;
}

function mouseClicked() {
  flag = 1;
  x_pos = mouseX;
  y_pos = mouseY;
  x_speed = base_speed;
  //y_speed = x_speed*(dist(0, y, 0, y_pos))/((dist(x, 0, x_pos, 0)));
  let y_dist = parseInt(dist(0, y, 0, y_pos));
  let x_dist = parseInt(dist(x, 0, x_pos, 0));
  y_speed = x_speed * (y_dist) / (x_dist);
  //y_speed = parseInt(y_speed);
  if (y_speed > x_speed) {
    y_speed = base_speed;
    x_speed = y_speed * (x_dist) / (y_dist);
  }
}