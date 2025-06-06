#include <HID-Project.h>
#include <HID-Settings.h>

const int btnPrev = 10;
const int btnPlayPause = 15;
const int btnNext = 16;
const int btnVolumeDown = 7;
const int btnVolumeUp = 8;

void setup() {
  pinMode(btnPrev, INPUT_PULLUP);
  pinMode(btnPlayPause, INPUT_PULLUP);
  pinMode(btnNext, INPUT_PULLUP);
  pinMode(btnVolumeDown, INPUT_PULLUP);
  pinMode(btnVolumeUp, INPUT_PULLUP);

  BootKeyboard.begin();
}

void loop() {
  // 
  if (digitalRead(btnPrev) == LOW) {
    Consumer.write(MEDIA_PREVIOUS);
    delay(200);
    while(digitalRead(btnPrev) == LOW);
  }

  if (digitalRead(btnPlayPause) == LOW) {
    Consumer.write(MEDIA_PLAY_PAUSE);
    delay(200);
    while(digitalRead(btnPlayPause) == LOW);
  }

  if (digitalRead(btnNext) == LOW) {
    Consumer.write(MEDIA_NEXT);
    delay(200);
    while(digitalRead(btnNext) == LOW);
  }

  
  if (digitalRead(btnVolumeDown) == LOW) {
    BootKeyboard.press(KEY_F14);
  } else {
    BootKeyboard.release(KEY_F14);
  }


  if (digitalRead(btnVolumeUp) == LOW) {
    BootKeyboard.press(KEY_F15);
  } else {
    BootKeyboard.release(KEY_F15);
  }

  delay(10);  
}
