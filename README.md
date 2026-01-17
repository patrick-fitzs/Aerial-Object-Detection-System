# Radar-Based Aerial Object Detection System

## Project Structure

```
.
├── cpp/                 # C++ radar simulator core
│   ├── src/
│   ├── include/
│   └── CMakeLists.txt
├── python/              # Python AI classification layer
│   ├── gemini_client.py
│   ├── classify_targets.py
│   └── requirements.txt
└── data/                # JSON data files
```

## Building C++ Code

### Prerequisites
- CMake 3.10 or higher
- C++17 compatible compiler (GCC 7+, Clang 5+, MSVC 2017+)

### Build Steps

```bash
cd cpp
mkdir build
cd build
cmake ..
make
```

The executable `radar_simulator` will be generated in the `build/` directory.

## Running Python Pipeline

### Prerequisites
- Python 3.10 or higher
- pip

### Setup

```bash
cd python
pip install -r requirements.txt
```

### Environment Variable

Set Gemini API key:

```bash
export GEMINI_API_KEY=your_api_key_here
```


### Execution

```bash
python classify_targets.py [input_file] [output_file]
```

Default input: `../data/radar_output.json`  
Default output: `../data/classified_output.json`

## Workflow

1. Run C++ radar simulator to generate detection JSON
2. Process detection JSON through Python classification pipeline
3. Review classified output JSON
