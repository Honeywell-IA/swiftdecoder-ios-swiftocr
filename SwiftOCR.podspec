Pod::Spec.new do |spec|
  spec.name               = "SwiftOCR"
  spec.version            = "6.0.11"
  spec.platform = :ios, '13.0'
  spec.ios.deployment_target = '13.0'
  spec.summary            = "SwiftOCR"
  spec.description        = "Honeywell OCR Scanning SDK"
  spec.homepage           = "https://www.honeywell.com/us/en"
  spec.documentation_url  = "https://www.honeywell.com/us/en"
  spec.author             = { "Honeywell" => "SwiftDecoder-Team" }
  spec.source            = { 
	:git => "https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr.git",
      	:tag => "6.0.11" 
}
spec.vendored_frameworks = 'SwiftOCR.xcframework'
end