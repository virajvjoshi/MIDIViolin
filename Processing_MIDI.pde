import processing.serial.*;
import ddf.minim.*; //import library (necessary)
import ddf.minim.ugens.*; // import library (necessary)
Minim minim;  // declaration (necessary)
AudioOutput out; // declaration (necessary)

int lf = 10;    // Linefeed in ASCII
String myString = null;
Serial myPort;  // The serial port
int sensorValue = 0;

void setup() {
  // List all the available serial ports
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[2], 9600);
  myPort.clear();
  myString = myPort.readStringUntil(lf);
  myString = null;
  size(300, 300, P3D); // this is always for window size
  minim = new Minim(this); // declaration (necessary)
  out = minim.getLineOut(); // declaration (necessary)
  out.setTempo( 80 ); // declaration (necessary)
}

void draw() {
  while (myPort.available() > 0) {
    myString = myPort.readStringUntil(lf);
    if (myString != null) {
      myString = myString.trim();
      if(myString.length() > 0) {
        println(myString); 
        try {
          sensorValue = Integer.parseInt(myString);
          int brightness = (int)map(sensorValue, 0, 1023, 0, 255);
          background(brightness);
        } catch(Exception e){}
       if(myString.equals("s1")){
              out.playNote( "E3" );
      }
             if(myString.equals("r1-")){
              out.playNote( "F3" );
      }
             if(myString.equals("r1")){
              out.playNote( "F#3" );
      }
             if(myString.equals("g1-")){
              out.playNote( "G3" );           
      }
              if(myString.equals("g1")){
              out.playNote( "G#3" );           
      }
              if(myString.equals("m1")){
              out.playNote( "A3" );           
      }           
              if(myString.equals("m1+")){
              out.playNote( "A#3" );           
      }  
              if(myString.equals("p1")){
              out.playNote( "B3" );           
      }   
              if(myString.equals("d1-")){
              out.playNote( "C4" );           
      }   
              if(myString.equals("d1")){
              out.playNote( "C#4" );           
      }   
              if(myString.equals("n1-")){
              out.playNote( "D4" );           
      }   
              if(myString.equals("n1")){
              out.playNote( "D#4" );           
      }
              if(myString.equals("s2")){
              out.playNote( "E4" );           
      }
             if(myString.equals("r2-")){
              out.playNote( "F3" );
      }
             if(myString.equals("r2")){
              out.playNote( "F#4" );
      }
             if(myString.equals("g2-")){
              out.playNote( "G4" );           
      }
              if(myString.equals("g2")){
              out.playNote( "G#4" );           
      }
              if(myString.equals("m2")){
              out.playNote( "A4" );           
      }           
              if(myString.equals("m2+")){
              out.playNote( "A#4" );           
      }  
              if(myString.equals("p2")){
              out.playNote( "B4" );           
      }   
              if(myString.equals("d2-")){
              out.playNote( "C5" );           
      }   
              if(myString.equals("d2")){
              out.playNote( "C#5" );           
      }   
              if(myString.equals("n2-")){
              out.playNote( "D5" );           
      }   
              if(myString.equals("n2")){
              out.playNote( "D#5" );           
      }
              if(myString.equals("s3")){
              out.playNote( "E5" );           
      }
      }
      }
    }
  }