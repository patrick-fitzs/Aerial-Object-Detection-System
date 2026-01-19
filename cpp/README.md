# Details for data.json

Transfer of data from CPP → Python

```json
{
"timestamp_ns": 1000000000,
"targets" : [
{
"id":  1,
"type": "missile",
"position_m":  [100.0, 75.0, 50.0],
"velocity_mps": [500.0, 300.0, 150.0],
"acceleration_mps2": [1.1, -10.8, 0.0],
"rcs_m2" : 0.20,
"orientation_degrees" : [10.2, 15.3, 17.8]

    }
]
}
```

- `Timestamp` measured in nanoseconds [Simulation time]
- `Targets`: All objects in this timestamp.
- `id`: Unique identifier
- `type`: Object type. Ground truth class label.
- `position_m`: position in metres [x,y,z]
  - This determines range to the radar, time delay of radar echo and the line of sight.
  - used by unreal visualisation /raytracing /FDTD
- `velocity_mps2`: velocity vector measured in metres per second
  - Tracking filters (kalman). Can separate missile vs aircraft by the speed profile.
- `acceleration_mps2`: Acceleration in m/s^2
  - Can separate between missiles that have high and sustained acceleration and aircraft that has smoother acceleration.
- `rcs_m2`: Radar cross section in square metres.
  - controls signal strength and detection probability.
- `orientation_degrees`: The targets orientation in degrees [roll, pitch, yaw]
  - realism