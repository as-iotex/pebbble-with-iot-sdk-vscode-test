# Sample application for NRF91 with IoT SDK

Contains the sample application "hello world" from the zephyr sample applications with the following modifications:  

- The `layer` directory was copied verbatim from <https://github.com/machinefi/w3bstream-iot-sdk/tree/experimental-clean/component/layer>.  
- CMakeLists.txt was modified to compile the layer directory as a static lib and link it to the app  
- The `main()` function calls `psa_generate_random()` to verify that the SDK functions can be called  

## Usage

- Clone this repository  
- Install NRF Connect SDK in your machine along with the VSCode extension pack by following the instructions at <https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/gs_assistant.html>   
- Open the directory where you cloned the sdk in VSCode  
- Configure the setting by following <https://nrfconnect.github.io/vscode-nrf-connect/connect/setup.html>. Note that default settings are already in `.vscode/settings.json`. But they need modified if your SDK is in a different location (depending on your machine).  
- I have tested with both SDK 1.4.0 and 2.0.0, I get the same error in both  
- Add an existing application by following <https://nrfconnect.github.io/vscode-nrf-connect/connect/create_app.html#add-an-existing-application> . Select the directory where you cloned the repo as the application folder  
- Create a build configuration following <https://nrfconnect.github.io/vscode-nrf-connect/connect/build_app.html>. I selected the board `Thingy91 non secure` as Pebble tracker is based on it  
- Click Build configuration, you should see the build output in the terminal panel  

## Expected

The app builds correctly

## Actual behaviour

The app fails to build, you can see the log that I was getting in `build-out.log`  
