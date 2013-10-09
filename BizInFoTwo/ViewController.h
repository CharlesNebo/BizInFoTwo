//
//  ViewController.h
//  BizInFoTwo
//
//  Created by Charles Nebo on 10/8/13.
//  Copyright (c) 2013 charles Nebo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController<MKMapViewDelegate>
{  
    IBOutlet UITextView *textView;
    IBOutlet MKMapView *mapView;
    IBOutlet UITextField *textField;
    IBOutlet UIButton *Go;
    CLLocationManager *locationManager;
    CLLocation *currentLocation;

}
@property (nonatomic, retain) IBOutlet MKMapView *mapView;
@property (nonatomic, retain) IBOutlet UITextField *textField;
@property (nonatomic, retain) IBOutlet UITextView *textView;
@property (nonatomic, retain) IBOutlet UIButton *Go;
@property (nonatomic, retain) CLLocation *currentLocation;
-(IBAction)btnGo;
@end
