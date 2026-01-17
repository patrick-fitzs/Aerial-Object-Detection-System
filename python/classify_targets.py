import json
import sys
from gemini_client import GeminiClient


def load_radar_data(filename: str) -> dict:
    # Boilerplate: Load JSON radar data
    with open(filename, 'r') as f:
        return json.load(f)


def classify_targets(input_file: str, output_file: str):
    client = GeminiClient()
    
    radar_data = load_radar_data(input_file)
    
    # Boilerplate: Process detections and classify
    results = []
    
    # Classification logic placeholder
    for detection in radar_data.get('detections', []):
        classification = client.classify_target(detection)
        results.append({
            **detection,
            **classification
        })
    
    output_data = {
        'detections': results
    }
    
    with open(output_file, 'w') as f:
        json.dump(output_data, f, indent=2)


if __name__ == "__main__":
    input_file = sys.argv[1] if len(sys.argv) > 1 else "../data/radar_output.json"
    output_file = sys.argv[2] if len(sys.argv) > 2 else "../data/classified_output.json"
    
    classify_targets(input_file, output_file)
