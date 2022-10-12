class chaos {
    constructor(R) { //R, G, B, A=0) {
        this.radius = R;
        this.x = random(this.radius, width - this.radius) //width / 2;
        this.y = random(this.radius, width - this.radius) //height / 2;
        this.r = random(100, 255);
        this.g = random(100, 255);
        this.b = random(100, 255);
    }
    move() { //'this' refers to ANY object created under the class 
        this.x += random(-10, 10);
        this.y += random(-10, 10);

        if (this.x < this.radius || this.x > width - this.radius)
            this.x = width / 2;
        if (this.y < this.radius || this.y > height - this.radius)
            this.y = height / 2;
    }
    disp() {
        fill(this.r, this.g, this.b);
        strokeWeight(1.5);
        circle(this.x, this.y, this.radius);
    }
}