#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setup(640,480);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    grabber.draw(0,0);
    
    
    for (int i = 0; i < grabber.getWidth(); i+=10){
        for (int j = 0; j < grabber.getHeight(); j+=10){
            float brightness = grabber.getPixels().getColor(i,j).getBrightness();
            
            float angle = ofMap(brightness, 0, 255, 0, TWO_PI);
            
            ofDrawLine(i + 640, j, i + 640 + 10 * cos(angle), j + 10 * sin(angle));
            //ofDrawCircle(i + 640, j, ofMap(brightness, 0, 255, 4,4.8));
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
