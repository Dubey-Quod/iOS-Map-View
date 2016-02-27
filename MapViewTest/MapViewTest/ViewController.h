//
//  ViewController.h
//  MapViewTest
//
//  Created by manish on 08/02/2016.
//  Copyright © 2016 com.manish. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <MapKit/MKAnnotation.h>
#import <CoreLocation/CoreLocation.h>
#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

@interface ViewController : UIViewController<MKMapViewDelegate,  CLLocationManagerDelegate>
{
    
}

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *btnChangeMap;
@property(nonatomic, retain) CLLocationManager *locationManager;

- (IBAction)changeMapType:(id)sender;


@end

