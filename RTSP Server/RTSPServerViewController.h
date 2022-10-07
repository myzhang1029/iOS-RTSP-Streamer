//
//  RTSPServerViewController.h
//  RTSP Server
//
//  Created by Geraint Davies on 11/01/2013.
//  Copyright (C) 2013 GDCL http://www.gdcl.co.uk/license.htm
//

#import <UIKit/UIKit.h>

@interface RTSPServerViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *cameraView;
@property (strong, nonatomic) IBOutlet UILabel *serverAddress;

- (void) startPreview;

@end
