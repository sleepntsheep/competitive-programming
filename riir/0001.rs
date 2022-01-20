use std::io;

fn main() {
    let mut score: i64 = 0;


    for _ in 0..3 {
        let mut temp = String::new();

        io::stdin()
            .read_line(&mut temp)
            .expect("");

        score += temp.trim().parse::<i64>().unwrap() as i64;
    }

    let result:String = grade(score).to_owned();

    println!("{}", result);
}

fn grade(n: i64) -> &'static str {
    if 100 >= n && n >= 80 {
        "A"
    }
    else if 79 >= n  && n >= 75 {
        "B+"
    }
    else if 74 >= n  && n >= 70 {
        "B"
    }
    else if 69 >= n && n  >= 65 {
        "C+"
    }
    else if  64 >= n && n  >= 60 {
        "C"
    }
    else if 59 >= n && n >= 55 {
        "D+"
    }
    else if 54 >= n && n >= 50 {
        "D"
    }
    else if 49 >= n && n >= 0 {
        "F"
    }
    else {
        ""
    }
}
