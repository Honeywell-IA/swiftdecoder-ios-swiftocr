# swiftdecoder-ios-swiftocr
Add SwiftDecoder via Cocoapods:

- Create a podfile in the root of your project folder by running pod init command

- Add SwiftOCR and its dependency SwiftDecoder framework in Podfile. For instance, add:

      pod 'SwiftOCR', :git => 'https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr.git'

      pod 'SwiftDecoder', :git => 'https://github.com/Honeywell-IA/swiftdecoder-ios-core.git'

- If you want to install a specific version, you can do so by specifying the version explicitly. For instance:

      pod 'SwiftOCR', :git => 'https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr.git', :tag => '6.0.5'
      


# swiftdecoder-ios-swiftocr-swift-package-manager

Add SwiftDecoder via swift-package-manager:

- To include the SDK in your Xcode project you have to add a Package Dependency in the project's settings section and in the tab "Package Dependencies".

- Add the url of this repository: https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr and select main branch  
      
- Add the url of this repository: https://github.com/Honeywell-IA/swiftdecoder-ios-core and select main branch        

- Once you have added all the the packages, you should see SwiftOCR, SwiftDecoder added to your Package Dependencies in Xcode's Project Navigator


# swiftdecoder-ios-swiftocr-manual-integration

To install manually, please refer "Software Integration guide" under "Documentation" folder.
