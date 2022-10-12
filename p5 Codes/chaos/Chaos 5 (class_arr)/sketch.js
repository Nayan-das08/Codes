let ball = [];
let stop_move = 0;
let r = 40;

function setup() {
  createCanvas(windowWidth, windowHeight);
  background(0);
  for (let i = 0; i < 3; i++) {
    ball[i] = new chaos(r);
    r += 20;
  }
  //ball = new chaos(50);
}

function draw() {
  //background(0);
  for (let i = 0; i < 3; i++)
    ball[i].disp();

  if (stop_move == 0) {
    for (let i = 0; i < 3; i++)
      ball[i].move();

  }
}

function mouseClicked() {
  if (stop_move == 0)
    stop_move = 1;
  else if (stop_move == 1) {
    stop_move = 0;
    frameRate(60);
  }
}