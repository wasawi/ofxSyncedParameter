#pragma once

#include "ofMain.h"
#include "SyncedParameter.h"
#include "SyncedParameterCollection.h"
#include "ofxOscParameterSync.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    SyncedParameter<float> timeElapsed;
    SyncedParameter<int> currentFrame;
    SyncedParameterCollection<int> intCollection;
    SyncedParameterCollection<string> stringCollection;
    SyncedParameterCollection<bool> boolCollection;

    vector<SyncedParameter<string>> stringParams;

    void onCurrentFrameUpdate(int& value);
    
    ofxOscParameterSync synchronizer;
};
