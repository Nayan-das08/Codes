let x, y;
let radius = 30;
let x_dir = 1;
let y_dir = 1;
let rate = 5;
let w = 20;
let l = 100;
let bar_line = 130;

function setup() {
  createCanvas(windowWidth, windowHeight);
  x = random(50, width - radius);
  y = radius; //random(50, height - radius - bar_line);
  //strokeWeight(2);
}

function draw() { 
  background(160, 100, 160);
  ball();
  bar();
  //strokeWeight(0.5)
} 

function bar() {
  fill(0);
  rectMode(CENTER);
  rect(mouseX, height - bar_line + w / 2, l, w, 20);
}

function ball() {
  fill(60, 0, 150);
  circle(x, y, 2 * radius);

  if (x > (width - radius) || x < radius) {
    x_dir *= -1;
  }

  if (y < radius) {
    y_dir *= -1;
  }
  //if (y > (height - radius - 150) || y < radius) {
  if (y > height - radius - bar_line)
    if (x < mouseX + l / 2 && x > mouseX - l / 2)
      y_dir *= -1;
    else
      stop_ball();
  //}

  x = x + rate * x_dir;
  y = y + rate * y_dir;
  /*
  if (mouseY < (height - radius - 150)) {
    x = mouseX;
    y = mouseY;
  }

  /*
  x = 375;
  y = height - radius - 150;
  */
}

function stop_ball() {
  frameRate(0);
  textSize(40);
  textFont('Consolas');
  text('uff, GAME OVER!', (width / 2) - (textWidth('GAME OVER!') / 2), height / 2);
  
}

function mousePressed() {
  //if (frameRate() == 0) {
  x = random(50, width - radius);
  y = radius;
  frameRate(60);
  //}
}